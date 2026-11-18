#pragma once

class CItem : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0x8E0, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0x8F8, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0x910, size 0x1, align 1
    char _pad_0911[0x7]; // offset 0x911
    CEntityIOOutput m_OnCacheInteraction; // offset 0x918, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0x930, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0x948, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0x954, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0x960, size 0x1, align 1 | MNotSaved
    char _pad_0961[0xF]; // offset 0x961
};
