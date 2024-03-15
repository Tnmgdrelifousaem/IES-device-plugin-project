#ifndef IES_DEVICE_PLUGIN_PROJECT_SETINNERSTATUSUSECASE_H
#define IES_DEVICE_PLUGIN_PROJECT_SETINNERSTATUSUSECASE_H

#include <QObject>

#include <utils/baseutils.h>

#include "deviceplugin/entity/deviceentity.h"


struct SetInnerStatusUseCaseRequest {
    bool value;
};

struct SetInnerStatusUseCaseResponse {
    bool value = 0;
    ErrorCode error_code = OPERATION_INTERRUPTED;
};


class SetInnerStatusUseCase: public QObject {
    Q_OBJECT
public:
    explicit SetInnerStatusUseCase(const std::shared_ptr<DeviceEntity> &device_entity);

    SetInnerStatusUseCaseResponse execute(SetInnerStatusUseCaseRequest request);

private:
    std::shared_ptr<DeviceEntity> _device_entity = nullptr;
};

class SetInnerStatusCommand : public Command {
public:
    explicit SetInnerStatusCommand(const std::shared_ptr<SetInnerStatusUseCase> &use_case);

    QVariant execute(QVariant request) override;

private:
    std::shared_ptr<SetInnerStatusUseCase> _use_case = nullptr;
};

#endif //IES_DEVICE_PLUGIN_PROJECT_SETINNERSTATUSUSECASE_H
