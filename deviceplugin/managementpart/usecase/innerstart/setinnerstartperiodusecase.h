#ifndef IES_DEVICE_PLUGIN_PROJECT_SETINNERSTARTPERIODUSECASE_H
#define IES_DEVICE_PLUGIN_PROJECT_SETINNERSTARTPERIODUSECASE_H

#include <QObject>

#include <utils/baseutils.h>

#include "deviceplugin/entity/deviceentity.h"


struct SetInnerStartPeriodUseCaseRequest {
    uint64_t value;
};

struct SetInnerStartPeriodUseCaseResponse {
    uint64_t value = 0;
    ErrorCode error_code = OPERATION_INTERRUPTED;
};


class SetInnerStartPeriodUseCase: public QObject {
    Q_OBJECT
public:
    explicit SetInnerStartPeriodUseCase(const std::shared_ptr<DeviceEntity> &device_entity);

    SetInnerStartPeriodUseCaseResponse execute(SetInnerStartPeriodUseCaseRequest request);

private:
    std::shared_ptr<DeviceEntity> _device_entity = nullptr;
};

class SetInnerStartPeriodCommand : public Command {
public:
    explicit SetInnerStartPeriodCommand(const std::shared_ptr<SetInnerStartPeriodUseCase> &use_case);

    QVariant execute(QVariant request) override;

private:
    std::shared_ptr<SetInnerStartPeriodUseCase> _use_case = nullptr;
};

#endif //IES_DEVICE_PLUGIN_PROJECT_SETINNERSTARTPERIODUSECASE_H
