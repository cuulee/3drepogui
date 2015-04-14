/**
 *  Copyright (C) 2015 3D Repo Ltd
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef REPO_FEDERATION_DIALOG_H
#define REPO_FEDERATION_DIALOG_H

//------------------------------------------------------------------------------
// Qt
#include <QDialog>

//------------------------------------------------------------------------------
// GUI
#include "../primitives/repoidbcache.h"

namespace Ui {
class RepoFederationDialog;
}

namespace repo {
namespace gui {

class RepoFederationDialog : public QDialog
{
    Q_OBJECT

public:

    explicit RepoFederationDialog(
            RepoIDBCache *dbCache,
            QWidget *parent = 0);

    ~RepoFederationDialog();

public slots :

    void addAvailableProject(const QString &);

    int exec();

    void refresh();

private:

    Ui::RepoFederationDialog *ui;

    RepoIDBCache *dbCache;
};

} // end namespace gui
} // end namespace repo

#endif // REPO_FEDERATION_DIALOG_H