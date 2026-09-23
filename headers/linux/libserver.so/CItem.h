#pragma once

class CItem : public CBaseAnimGraph /*0x0*/  // sizeof 0xDC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD28]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0xD28, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xD40, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0xD58, size 0x1, align 1
    char _pad_0D59[0x7]; // offset 0xD59
    CEntityIOOutput m_OnCacheInteraction; // offset 0xD60, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0xD78, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0xD90, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xD9C, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0xDA8, size 0x1, align 1 | MNotSaved
    char _pad_0DA9[0x17]; // offset 0xDA9
};
