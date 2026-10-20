#pragma once

class CCitadel_Item_BaseProjectileAOEModifier : public CCitadel_Item /*0x0*/  // sizeof 0x17A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x16E0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16EC, size 0xC, align 4
    char _pad_16F8[0xB0]; // offset 0x16F8
};
