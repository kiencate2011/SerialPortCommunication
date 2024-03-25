import QtQuick
import QtQuick.Controls
import Connection

Window {
    width: 400
    height: 300
    color: "lightblue"

    Button {
        text: "Go Back"
        anchors.centerIn: parent
        onClicked: stackView.pop()
    }

    Connection
    {
        id: connection
    }

    Button
    {
        text: "Click me"
        anchors.centerIn: parent
        onClicked: {
            console.log("Button clicked")
            // Thực hiện hành động khi nút được nhấn ở đây
            connection.updatePort()
            console.log(connection.listPort[1])
        }
    }
}
