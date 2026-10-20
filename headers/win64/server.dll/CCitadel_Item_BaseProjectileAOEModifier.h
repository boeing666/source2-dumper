#pragma once

class CCitadel_Item_BaseProjectileAOEModifier : public CCitadel_Item /*0x0*/  // sizeof 0x16A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x14B0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14BC, size 0xC, align 4
    char _pad_14C8[0xB0]; // offset 0x14C8
    CitadelAbilityProjectileCreateInfo_t m_projInfo; // offset 0x1578, size 0x130, align 255
};
