
import QtQuick 2.0

Rectangle {
    id: layout
    width:1000
    height: 650

Rectangle {
     id:simplebutton
     color: "grey"
     width: 150; height: 75
     gradient: Gradient {
          // UbuntuTouch-like background
                 GradientStop { position: 0.0; color: "#c05c7c"; }
                 GradientStop { position: 0.5; color: "#d56a59"; }
             }

     Text{
         id: buttonLabel
         anchors.centerIn: parent
         text: "button label"
     }
     Loader { id: pageLoader }
     MouseArea{
         id: buttonMouseArea

         anchors.fill: parent //anchor all sides of the mouse area to the rectangle's anchors
                 //onClicked handles valid mouse button clicks
         //onClicked: console.log(buttonLabel.text + " clicked" )
         onClicked: pageLoader.source = "mainui.qml"
     }
 }
}
