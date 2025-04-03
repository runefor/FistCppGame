#include <QtWidgets/QApplication>
#include <QtWidgets/QgraphicsScene>
#include <QtWidgets/QgraphicsRectItem>
#include <QtWidgets/QgraphicsView>
#include <QScreen>

#include<qbrush.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    // QScreen: ���� ȭ�� ���� ��������
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry(); // ��ü ȭ�� ũ��

    QGraphicsScene scene;
    scene.setBackgroundBrush(QBrush(Qt::white));
    scene.setSceneRect(0, 0, screenGeometry.width(), screenGeometry.height()); // ��ǥ�谡 (0,0)���� ������ �� �ֵ��� ����
    QGraphicsRectItem rect(0, 0, 200, 100);
    scene.addItem(&rect);

    QGraphicsView view(&scene);
    view.showFullScreen();
    //view.show();

    return a.exec();
}
