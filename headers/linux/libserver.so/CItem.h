#pragma once

class CItem : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xB08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0xA78, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xA90, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0xAA8, size 0x1, align 1
    char _pad_0AA9[0x7]; // offset 0xAA9
    CEntityIOOutput m_OnCacheInteraction; // offset 0xAB0, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0xAC8, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0xAE0, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xAEC, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0xAF8, size 0x1, align 1 | MNotSaved
    char _pad_0AF9[0xF]; // offset 0xAF9
};
