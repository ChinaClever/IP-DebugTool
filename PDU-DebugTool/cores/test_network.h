#ifndef TEST_NETWORK_H
#define TEST_NETWORK_H
#include "baselogs.h"
#include "sn_serialnum.h"
#include "udprecvsocket.h"

class Test_NetWork : public BaseThread
{
    Q_OBJECT
    explicit Test_NetWork(QObject *parent = nullptr);
public:
    static Test_NetWork *bulid(QObject *parent = nullptr);

    bool startProcess();
protected:
    void run();
    void workDown();
    bool checkNet();
    void updateMacAddr();

protected slots:
    void initFunSlot();

private:
    bool mac;
    UdpRecvSocket *mUdp;
    QProcess *mProcess;
};

#endif // TEST_NETWORK_H
