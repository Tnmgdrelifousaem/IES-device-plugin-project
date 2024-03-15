#ifndef CPSDEVICESTANDALONEPLUGIN_DEVICEPLUGIN_ENTITY_IMPLS_STANDALONEIMPL1_DEVICEENTITYNOTCONNECTEDSTATESTANDALONEIMPL2_H_
#define CPSDEVICESTANDALONEPLUGIN_DEVICEPLUGIN_ENTITY_IMPLS_STANDALONEIMPL1_DEVICEENTITYNOTCONNECTEDSTATESTANDALONEIMPL2_H_

#include "deviceplugin/entity/deviceentity.h"


class DeviceEntityNotConnectedStateStandaloneImpl1: public DeviceEntityState {
 public:
  GetSyncModuleStatusesResponse getSyncModuleStatuses(GetSyncModuleStatusesRequest request) override;

  GetSFPParametersResponse getSFPParameters(GetSFPParametersRequest request) override;

  int getChannelCount() override;
  GetChannelDelayResponse getChannelsDelay(GetChannelDelayRequest request) override;
  GetChannelWidthResponse getChannelsWidth(GetChannelWidthRequest request) override;
  GetChannelEnabledStatusResponse getChannelsEnabledStatus(GetChannelEnabledStatusRequest request) override;
  GetChannelInvertedStatusResponse getChannelsInvertedStatus(GetChannelInvertedStatusRequest request) override;
  GetChannelStartModeResponse getChannelsStartMode(GetChannelStartModeRequest request) override;
  GetChannelStartSourceResponse getChannelsStartSource(GetChannelStartSourceRequest request) override;

  SetChannelDelayResponse setChannelDelay(SetChannelDelayRequest request) override;
  SetChannelWidthResponse setChannelWidth(SetChannelWidthRequest request) override;
  SetChannelEnabledStatusResponse setChannelEnabledStatus(SetChannelEnabledStatusRequest request) override;
  SetChannelInvertedStatusResponse setChannelInvertedStatus(SetChannelInvertedStatusRequest request) override;
  SetChannelStartSourceResponse setChannelStartSource(SetChannelStartSourceRequest request) override;
  SetChannelStartModeResponse setChannelStartMode(SetChannelStartModeRequest request) override;

  GetInnerStartPeriodResponse getInnerStartPeriod(GetInnerStartPeriodRequest request) override;
  SetInnerStartPeriodResponse setInnerStartPeriod(SetInnerStartPeriodRequest request) override;

  SetInnerStatusResponse setInnerStatus(SetInnerStatusRequest request) override;

  ErrorCode loadDeviceDTO(const std::shared_ptr<DeviceEntityDTO> &dto) override;
  std::shared_ptr<DeviceEntityDTO> updateDeviceDTO() override;

};

#endif //CPSDEVICESTANDALONEPLUGIN_DEVICEPLUGIN_ENTITY_IMPLS_STANDALONEIMPL1_DEVICEENTITYNOTCONNECTEDSTATESTANDALONEIMPL2_H_
