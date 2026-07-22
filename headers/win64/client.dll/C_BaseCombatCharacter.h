#pragma once

class C_BaseCombatCharacter : public C_BaseFlex /*0x0*/  // sizeof 0xEE8, align 0x8 [vtable] (client) {MNetworkExcludeByUserGroup MNetworkVarNames}
{
public:
    char _pad_0000[0xE60]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0xE60, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback MNotSaved
    AttachmentHandle_t m_leftFootAttachment; // offset 0xE78, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0xE79, size 0x1, align 255 | MNotSaved
    char _pad_0E7A[0x2]; // offset 0xE7A
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0xE7C, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0xE80, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0xE84, size 0x4, align 4 | MNotSaved
    char _pad_0E88[0x60]; // offset 0xE88
};
