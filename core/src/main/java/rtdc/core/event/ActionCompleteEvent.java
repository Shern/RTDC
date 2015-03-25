package rtdc.core.event;

import rtdc.core.json.JSONObject;
import rtdc.core.model.ObjectProperty;

public class ActionCompleteEvent extends Event<ActionCompleteEvent.Handler> {

    public static final EventType<Handler> TYPE = new EventType<Handler>("actionCompleteEvent");

    public interface Handler extends EventHandler{ public void onActionComplete(ActionCompleteEvent event);}

    public enum Properties implements ObjectProperty<ActionCompleteEvent>{
        objectId,
        objectType
    }

    private final String objectType;
    private final int objectId;

    public ActionCompleteEvent(int objectId, String objectType){
        this.objectId = objectId;
        this.objectType = objectType;
    }

    public ActionCompleteEvent(JSONObject object){
        objectId = object.getInt(Properties.objectId.name());
        objectType = object.getString(Properties.objectType.name());
    }

    public int getObjectId(){
        return objectId;
    }

    public String getObjectType(){
        return objectType;
    }


    public void fire(){
        for(Handler handler: getHandlers(TYPE))
            handler.onActionComplete(this);
    }

    @Override
    public ObjectProperty[] getProperties() {
        return Properties.values();
    }

    @Override
    public String getType() {
        return TYPE.getName();
    }

    @Override
    public Object getValue(ObjectProperty property) {
        switch((Properties) property){
            case objectId: return objectId;
            case objectType: return objectType;
        }
        return null;
    }
}
