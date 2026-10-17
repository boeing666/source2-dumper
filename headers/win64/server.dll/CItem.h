#pragma once

class CItem : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x880]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0x880, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0x898, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0x8B0, size 0x1, align 1
    char _pad_08B1[0x7]; // offset 0x8B1
    CEntityIOOutput m_OnCacheInteraction; // offset 0x8B8, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0x8D0, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0x8E8, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0x8F4, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0x900, size 0x1, align 1 | MNotSaved
    char _pad_0901[0xF]; // offset 0x901
};
