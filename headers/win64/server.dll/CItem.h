#pragma once

class CItem : public CBaseAnimGraph /*0x0*/  // sizeof 0xA00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x968]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0x968, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0x980, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0x998, size 0x1, align 1
    char _pad_0999[0x7]; // offset 0x999
    CEntityIOOutput m_OnCacheInteraction; // offset 0x9A0, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0x9B8, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0x9D0, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0x9DC, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0x9E8, size 0x1, align 1 | MNotSaved
    char _pad_09E9[0x17]; // offset 0x9E9
};
