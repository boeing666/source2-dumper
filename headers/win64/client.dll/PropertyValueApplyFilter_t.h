#pragma once

enum PropertyValueApplyFilter_t : uint32_t  // sizeof 0x4
{
    EApplyFilter_None = 0,
    EApplyFilter_OnlyIfImbued = 1,
    EApplyFilter_OnlyIfNonImbued = 2,
    EApplyFilter_OnlyIfHasCharges = 3,
    EApplyFilter_OnlyIfUltimate = 4,
    EApplyFilter_OnlyIfSignature = 5,
};
