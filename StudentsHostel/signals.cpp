#include "signals.h"
#include "config.h"
#include "widget.h"
#include "User.h"
#include <registration.h>
#include <authorization.h>
#include <QFile>
#include <QVBoxLayout>
#include <QDebug>

Signals::Signals(QWidget *parent)
    : QWidget(parent),
      m_currentWidget(nullptr)
{

    if (!QFile(Config::BinOfStudent).exists()||!QFile(Config::BinOfPersonnel).exists())
    {
        m_currentWidget = new Registration(this);
        this->resize(400,300);
        connect(m_currentWidget, SIGNAL(startAuth()),
                this, SLOT(slotForAuth()));

    }
    else
    {
        m_currentWidget = new authorization(this);
        this->resize(400,300);
        connect(m_currentWidget, SIGNAL(succesful(User*)),
                this, SLOT(slotOpenWidget(User*)));
    }

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setMargin(0);
    layout->addWidget(m_currentWidget);
    setLayout(layout);
}


Signals::~Signals()
{
    delete m_currentWidget;
}

void Signals::slotForAuth()
{
    delete m_currentWidget;
    m_currentWidget = new authorization(this);
    this->resize(400,300);
    connect(m_currentWidget, SIGNAL(succesful(User*)),
            this, SLOT(slotOpenWidget(User*)));
    layout()->addWidget(m_currentWidget);
}

void Signals::slotOpenWidget(User *user)
{
    delete m_currentWidget;
    m_currentWidget = new Widget(*user, this);
    this->resize(400,300);
    connect(m_currentWidget, SIGNAL(LogOut()),
            this, SLOT(slotForAuth()));
    this->resize(770,450);
    layout()->addWidget(m_currentWidget);
}
