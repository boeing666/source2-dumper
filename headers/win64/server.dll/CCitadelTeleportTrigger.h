#pragma once

class CCitadelTeleportTrigger : public CTriggerModifier /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA00]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xA00, size 0x20, align 255
    VectorWS m_vExitOrigin; // offset 0xA20, size 0xC, align 4
    char _pad_0A2C[0x44]; // offset 0xA2C
    CUtlSymbolLarge m_strExitPoint; // offset 0xA70, size 0x8, align 8
    CEntityIOOutput m_OnTeleport; // offset 0xA78, size 0x18, align 255
    CUtlSymbolLarge m_strPropModel; // offset 0xA90, size 0x8, align 8
    float32 m_flTeleportDelay; // offset 0xA98, size 0x4, align 4
    char _pad_0A9C[0x4]; // offset 0xA9C
};
