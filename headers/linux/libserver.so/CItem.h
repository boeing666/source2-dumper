#pragma once

class CItem : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xBE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB58]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0xB58, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xB70, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0xB88, size 0x1, align 1
    char _pad_0B89[0x7]; // offset 0xB89
    CEntityIOOutput m_OnCacheInteraction; // offset 0xB90, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0xBA8, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0xBC0, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xBCC, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0xBD8, size 0x1, align 1 | MNotSaved
    char _pad_0BD9[0xF]; // offset 0xBD9
};
