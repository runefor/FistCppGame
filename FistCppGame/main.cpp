#include <QtWidgets/QApplication>
#include <QtWidgets/QgraphicsScene>
#include <QtWidgets/QgraphicsRectItem>
#include <QtWidgets/QgraphicsView>
#include <QScreen>

#include<qbrush.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    // QScreen: 현재 화면 정보 가져오기
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry(); // 전체 화면 크기

    QGraphicsScene scene;
    scene.setBackgroundBrush(QBrush(Qt::white));
    scene.setSceneRect(0, 0, screenGeometry.width(), screenGeometry.height()); // 좌표계가 (0,0)에서 시작할 수 있도록 세팅
    QGraphicsRectItem rect(0, 0, 200, 100);
    scene.addItem(&rect);

    QGraphicsView view(&scene);
    view.showFullScreen();
    //view.show();

    return a.exec();
}
