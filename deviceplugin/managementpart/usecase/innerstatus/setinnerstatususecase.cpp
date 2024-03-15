
#include "setinnerstartperiodusecase.h"

SetInnerStatusUseCase::SetInnerStatusUseCase(const std::shared_ptr<DeviceEntity> &device_entity):
        _device_entity(device_entity){

}

SetInnerStatusUseCaseResponse SetInnerStatusUseCase::execute(SetInnerStatusUseCaseRequest request) {
    SetInnerStatusUseCaseResponse response{};

    if (_device_entity != nullptr) {
        SetInnerStatusRequest entity_request;
        auto entity_response = _device_entity->setInnerStatus(entity_request);

        response.error_code = entity_response.error_code;
        response.value = entity_response.value;
    }

    return response;
}