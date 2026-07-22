#pragma once

enum EBannedFeature : uint32_t  // sizeof 0x4
{
    k_eBannedFeature_Invalid = 0,
    k_eBannedFeature_LowPriorityMatchmaking = 1,
    k_eBannedFeature_CommsRestricted = 2,
    k_eBannedFeature_ReportingDisabled = 3,
};
