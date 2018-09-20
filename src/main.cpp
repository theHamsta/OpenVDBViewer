/*
  Copyright (C) 2014 Callum James

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <QApplication>
#include <QFileInfo>
#include "MainWindow.h"

int main( int argc, char** argv )
{
	QApplication a( argc, argv );
	MainWindow w;
	w.show();
	w.connectAndInit();

	if ( argc == 2 ) {
		QString arg1 = QString::fromLatin1( argv[1] );
		QFileInfo fileInfo( arg1 );

		if ( fileInfo.isFile() ) {
			w.openFile( fileInfo.canonicalFilePath()  );
		} else {
			qDebug() << "Could not find file" << fileInfo;
		}
	}

	return a.exec();
}
