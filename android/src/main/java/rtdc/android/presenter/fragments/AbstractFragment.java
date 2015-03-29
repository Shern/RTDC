package rtdc.android.presenter.fragments;

import android.app.AlertDialog;
import android.app.Fragment;
import android.content.DialogInterface;
import rtdc.core.view.View;

public class AbstractFragment extends Fragment implements View{

    @Override
    public void displayPermanentError(String title, String error) {
        displayError(title, error);
    }

    @Override
    public void displayError(String title, String error) {
        new AlertDialog.Builder(getActivity().getBaseContext())
                .setTitle(title)
                .setMessage(error)
                .setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface dialog, int which) {
                        // continue with delete
                    }
                })
                .setIconAttribute(android.R.attr.alertDialogIcon)
                .show();
    }

    @Override
    public void setTitle(String title) {
        setTitle(title);
    }
}