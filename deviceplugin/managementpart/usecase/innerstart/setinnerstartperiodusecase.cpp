
#include "setinnerstartperiodusecase.h"

SetInnerStartPeriodUseCase::SetInnerStartPeriodUseCase(const std::shared_ptr<DeviceEntity> &device_entity):
        _device_entity(device_entity){

}

SetInnerStartPeriodUseCaseResponse SetInnerStartPeriodUseCase::execute(SetInnerStartPeriodUseCaseRequest request) {
    SetInnerStartPeriodUseCaseResponse response{};

    if (_device_entity != nullptr) {
        GetInnerStartPeriodRequest entity_request;
        auto entity_response = _device_entity->getInnerStartPeriod(entity_request);

        response.error_code = entity_response.error_code;
        response.value = entity_response.value;
    }

    return response;
}