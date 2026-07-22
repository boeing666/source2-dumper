#pragma once

class CItem : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0x7A0, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0x7B8, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0x7D0, size 0x1, align 1
    char _pad_07D1[0x7]; // offset 0x7D1
    CEntityIOOutput m_OnCacheInteraction; // offset 0x7D8, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0x7F0, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0x808, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0x814, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0x820, size 0x1, align 1 | MNotSaved
    char _pad_0821[0xF]; // offset 0x821
};
