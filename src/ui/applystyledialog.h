#ifndef APPLYSTYLEDIALOG_H
#define APPLYSTYLEDIALOG_H

#include <QDialog>

namespace Ui {
class ApplyStyleDialog;
}

class ApplyStyleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ApplyStyleDialog(QWidget *parent = 0);
    ~ApplyStyleDialog();

private:
    Ui::ApplyStyleDialog *ui;
};

#endif // APPLYSTYLEDIALOG_H