#ifndef IRCPAGE_H
#define IRCPAGE_H

#include <QWidget>


#include <QtNetwork>

namespace Ui {
    class IRCPage;
}
class ClientModel;
class WalletModel;
class TxViewDelegate;
class TransactionFilterProxy;

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** IRC #SFRCoin page widget */
class IRCPage : public QWidget
{
    Q_OBJECT

public:
    explicit IRCPage(QWidget *parent = 0);
    ~IRCPage();

    void setClientModel(ClientModel *clientModel);
    void setWalletModel(WalletModel *walletModel);

public slots:
    

signals:
  

private:
    Ui::IRCPage *ui;
    ClientModel *clientModel;
    WalletModel *walletModel;
   
private slots:
   
};

#endif // IRCPAGE_H
