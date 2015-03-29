package rtdc.android.impl;

import android.app.Activity;
import android.content.Intent;
import rtdc.android.AdminActivity;
import rtdc.android.Rtdc;
import rtdc.android.presenter.*;
import rtdc.android.presenter.fragments.AbstractFragment;
import rtdc.core.controller.Controller;
import rtdc.core.impl.Dispatcher;

public class AndroidDispatcher implements Dispatcher {

    @Override
    public void goToLogin(Controller caller) {
        startIntent(LoginActivity.class, caller);
    }

    @Override
    public void goToAllUnits(Controller caller) {
        startIntent(AdminActivity.class, caller);
    }

    @Override
    public void goToActionPlan(Controller caller) {
        startIntent(ActionPlanActivity.class, caller);
    }

    @Override
    public void goToUnitInfo(Controller caller) {
        startIntent(CreateUnitActivity.class, caller);
    }

    @Override
    public void goToCapacityOverview(Controller caller) {
        startIntent(CapacityOverviewActivity.class, caller);
    }

    @Override
    public void goToEditAction(Controller caller) {
        startIntent(CreateActionActivity.class, caller);
    }

    private void startIntent(Class<?> clazz, Controller caller){
        if(caller != null){
            if(caller.getView() instanceof AbstractActivity) {
                AbstractActivity activity = (AbstractActivity) caller.getView();
                activity.startActivity(new Intent(activity, clazz));
            } else if (caller.getView() instanceof AbstractFragment){
                Activity activity = ((AbstractFragment) caller.getView()).getActivity();
                activity.startActivity(new Intent(activity, clazz));
            }
        }else{
            Intent intent = new Intent(Rtdc.getAppContext(), clazz);
            intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
            Rtdc.getAppContext().startActivity(intent);
        }
    }
}