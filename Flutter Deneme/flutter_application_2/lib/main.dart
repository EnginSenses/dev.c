import 'dart:html';

import 'package:flutter/material.dart';

void main() {
  runApp(Ben());
}

class Ben extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: SafeArea(
        child: Scaffold(
          backgroundColor: Colors.blueGrey[600],
          appBar: AppBar(
            centerTitle: true,
            backgroundColor: Colors.blueGrey,
            title: Text("Engin Şenses"),
          ),
          body: Container(
            alignment: Alignment.bottomRight,
            width: 200,
            height: 200,
            decoration: BoxDecoration(
                shape: BoxShape.rectangle,
                color: Colors.lime,
                borderRadius: BorderRadiusDirectional.circular(5)),
            margin: EdgeInsets.all(15),
            padding: EdgeInsets.all(25),
            child: Transform(
              child: Text('Deneme'),
              transform: Matrix4.rotationZ(-0.2),
              alignment: FractionalOffset.center,
            ),
          ),
        ),
      ),
    );
  }
}
