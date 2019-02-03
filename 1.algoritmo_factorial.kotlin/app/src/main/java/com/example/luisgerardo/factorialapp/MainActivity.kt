package com.example.luisgerardo.factorialapp

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.text.Editable
import android.widget.Button
import android.widget.EditText
import android.widget.Toast

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        //Get the view component
        val numeroTxt = findViewById<EditText>(R.id.numero)
        val boton = findViewById<Button>(R.id.boton)

        boton.setOnClickListener{
            Toast.makeText(this, getFactorial(numeroTxt.text.toString().toInt()), Toast.LENGTH_SHORT).show()
        }
    }

    fun getFactorial(num: Int): String {
        var suma = 1
        if(num != 0){
            for (i in 2..num){
                suma = suma + i
            }
        }else{
            suma = 0
        }
        return suma.toString()
    }
}
