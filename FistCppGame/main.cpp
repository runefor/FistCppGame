#include <QtWidgets/QApplication>
#include <QtWidgets/QgraphicsScene>
#include <QtWidgets/QgraphicsRectItem>
#include <QtWidgets/QgraphicsView.h>

#include<qbrush.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    QGraphicsScene scene;
    scene.setBackgroundBrush(QBrush(Qt::white));
    QGraphicsRectItem rect(0, 0, 200, 100);
    scene.addItem(&rect);

    QGraphicsView view(&scene);
    view.showFullScreen();

    return a.exec();
}
