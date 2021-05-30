import 'package:flutter/material.dart';

void main() {
  runApp(
    MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        backgroundColor: Colors.greenAccent,
        appBar: AppBar(
          backgroundColor: Colors.blueGrey,
          title: Text(
            "SA",
          ),
        ),
        body: Center(
          child: Image(
            image: NetworkImage(
              "https://i1.sndcdn.com/artworks-000012002480-qainwa-t500x500.jpg",
            ),
          ),
        ),
      ),
    ),
  );
}
