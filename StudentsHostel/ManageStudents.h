#ifndef MANAGESTUDENTS_H
#define MANAGESTUDENTS_H
#include <QDialog>
#include "User.h"
class User;
namespace Ui {
class ManageStudents;
}
/*!
    \brief Класс управления студентами.
    Данное окно содержит в себе список студентов и кнопки для управления студентами.
*/
class ManageStudents : public QDialog
{
    Q_OBJECT

public:
    /*!
    Конструктор класса главного окна
    \param userlist Список студентов
    \param parent ссылка на родительский объект
    */
    explicit ManageStudents(const QList<User> &userlist, QWidget *parent = nullptr);
    ~ManageStudents();

public slots:

private slots:
    void on_add_clicked();
    void on_del_clicked();
    void on_edit_clicked();

private:
    Ui::ManageStudents *ui;
    const QList<User> &s_userlist;

signals:
    void addStudent(User); ///<Сигнал отправляемый при добавлении нового студента, посылает добавленного студента
    void editStudent(int, User); ///<Сигнал отправляемый при редактировании студента, посылает номер редактируемой строки, а также новые данные о студенте
    void deleteStudent(int); ///<Сигнал отправляемый при удалении студента, посылает номер удаляемой строки

};
#endif // MANAGESTUDENTS_H
