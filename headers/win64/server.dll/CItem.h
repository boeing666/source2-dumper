#pragma once

class CItem : public CBaseAnimGraph /*0x0*/  // sizeof 0xB80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE8]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0xAE8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xB00, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0xB18, size 0x1, align 1
    char _pad_0B19[0x7]; // offset 0xB19
    CEntityIOOutput m_OnCacheInteraction; // offset 0xB20, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0xB38, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0xB50, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xB5C, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0xB68, size 0x1, align 1 | MNotSaved
    char _pad_0B69[0x17]; // offset 0xB69
};
