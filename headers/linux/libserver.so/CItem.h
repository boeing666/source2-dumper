#pragma once

class CItem : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0xBC0, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xBD8, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0xBF0, size 0x1, align 1
    char _pad_0BF1[0x7]; // offset 0xBF1
    CEntityIOOutput m_OnCacheInteraction; // offset 0xBF8, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0xC10, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0xC28, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xC34, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0xC40, size 0x1, align 1 | MNotSaved
    char _pad_0C41[0xF]; // offset 0xC41
};
