package codekong.com.jnitest;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    static {
        System.loadLibrary("udt");
        System.loadLibrary("hello");
    }
    public native String getString(String name);
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textView  = (TextView) findViewById(R.id.my_text);
        textView.setText(getString("mmm"));
    }
}
