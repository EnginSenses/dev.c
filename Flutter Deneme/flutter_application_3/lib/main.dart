import 'dart:developer';

import 'package:flutter/material.dart';

void main() {
  runApp(ben());
}

class ben extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: SafeArea(
        child: Scaffold(
          appBar: AppBar(
            centerTitle: true,
            title: Text("Deneme"),
          ),
          body: Column(
            children: [
              Center(
                child: Image(
                    height: 200,
                    image: NetworkImage(
                        "https://flutter.github.io/assets-for-api-docs/assets/widgets/owl.jpg")),
              ),
              Center(
                child: Text("Baykuş"),
              ),
              Center(
                child: Container(
                  alignment: Alignment.bottomRight,
                  height: 200,
                  width: 200,
                  decoration: BoxDecoration(
                      shape: BoxShape.rectangle,
                      color: Colors.grey,
                      borderRadius: BorderRadiusDirectional.circular(5)),
                  color: Colors.blueGrey,
                  padding: EdgeInsets.all(5),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
