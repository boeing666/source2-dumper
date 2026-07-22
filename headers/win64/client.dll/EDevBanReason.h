#pragma once

enum EDevBanReason : uint32_t  // sizeof 0x4
{
    k_eDevBanReason_Unspecified = 0,
    k_eDevBanReason_AimAssist = 1,
    k_eDevBanReason_VisionAssist = 2,
    k_eDevBanReason_MovementAssist = 3,
};
