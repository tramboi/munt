/* Copyright (C) 2011 Jerome Fisher, Sergey V. Mikayev
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 2.1 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QtGui>

#include "SynthPropertiesDialog.h"
#include "ui_SynthPropertiesDialog.h"

SynthPropertiesDialog::SynthPropertiesDialog(QWidget *parent) :
		QDialog(parent),
		ui(new Ui::SynthPropertiesDialog)
{
	ui->setupUi(this);
}

SynthPropertiesDialog::~SynthPropertiesDialog()
{
	delete ui;
}

void SynthPropertiesDialog::on_romDirButton_clicked()
{
	QString s = QFileDialog::getExistingDirectory(this, "Choose ROM directory", ui->romDirLineEdit->text());
	ui->romDirLineEdit->setText(s);
}