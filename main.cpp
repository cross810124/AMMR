#include <Form_ControlPanel.h>
#include <QtWidgets/QApplication>
#include <ros/ros.h>

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "aiRobots_AMMR");
    QApplication *app = new QApplication(argc, argv);
    Form_ControlPanel *form_control = new Form_ControlPanel();
    form_control->show();
    int result = app->exec();

    ros::shutdown();
    return result;
}