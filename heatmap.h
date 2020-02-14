#ifndef HEATMAP_H
#define HEATMAP_H

#include <QObject>
#include <QVector>

class HeatMap : public QObject
{
	Q_OBJECT
public:
	explicit HeatMap(QObject *parent = nullptr);
	QVector< QVector<int>> heatBuffer;

	QVector<QVector <int>>xV, yV;

	void addHeatData(int time, int x, int y);

	void addHotSpots();

	QVector<int> departments;

	QVector<QVector<int> > dailyHeatMap();

signals:

public slots:
};

#endif // HEATMAP_H
