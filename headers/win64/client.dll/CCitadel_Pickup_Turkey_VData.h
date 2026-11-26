#pragma once

class CCitadel_Pickup_Turkey_VData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA18]; // offset 0x0
    float32 m_flBuffDuration; // offset 0xA18, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    char _pad_0A1C[0x4]; // offset 0xA1C
    CEmbeddedSubclass< CCitadelModifier > m_TurkeyBuffModifier; // offset 0xA20, size 0x10, align 8 | MPropertyDescription
    float32 m_flHoverRate; // offset 0xA30, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flHoverHeight; // offset 0xA34, size 0x4, align 4 | MPropertyDescription
    float32 m_flHoverTurnRate; // offset 0xA38, size 0x4, align 4 | MPropertyDescription
    char _pad_0A3C[0x4]; // offset 0xA3C
};
