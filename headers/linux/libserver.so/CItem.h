#pragma once

class CItem : public CBaseAnimGraph /*0x0*/  // sizeof 0xCE0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC48]; // offset 0x0
    CEntityIOOutput m_OnPlayerTouch; // offset 0xC48, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xC60, size 0x18, align 255
    bool m_bActivateWhenAtRest; // offset 0xC78, size 0x1, align 1
    char _pad_0C79[0x7]; // offset 0xC79
    CEntityIOOutput m_OnCacheInteraction; // offset 0xC80, size 0x18, align 255
    CEntityIOOutput m_OnGlovePulled; // offset 0xC98, size 0x18, align 255
    VectorWS m_vOriginalSpawnOrigin; // offset 0xCB0, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xCBC, size 0xC, align 4
    bool m_bPhysStartAsleep; // offset 0xCC8, size 0x1, align 1 | MNotSaved
    char _pad_0CC9[0x17]; // offset 0xCC9
};
