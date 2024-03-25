import QtQuick
import Connection
import WindowManager
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    StackView {
            id: stackView
            anchors.fill: parent
        }

    WindowManager
    {
        id: windowManager
    }

    Button
    {
        text: "Click me"
        anchors.centerIn: parent
        onClicked: {
            // stackView.push("connectionWindow.qml")
            windowManager.openNewWindow("qrc:/SerialPortSimulation/connectionWindow.qml")
        }
    }
}

