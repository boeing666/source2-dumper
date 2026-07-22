#pragma once

class CItem : public CBaseAnimGraph /*0x0*/  // sizeof 0xB30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA98]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0xA98, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xAB0, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0xAC8, size 0x1, align 1
    char _pad_0AC9[0x7]; // offset 0xAC9
    CEntityIOOutput m_OnCacheInteraction; // offset 0xAD0, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0xAE8, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0xB00, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xB0C, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0xB18, size 0x1, align 1 | MNotSaved
    char _pad_0B19[0x17]; // offset 0xB19
};
