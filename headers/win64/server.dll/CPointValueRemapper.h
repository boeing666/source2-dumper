#pragma once

class CPointValueRemapper : public CBaseEntity /*0x0*/  // sizeof 0x658, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bDisabled; // offset 0x4B0, size 0x1, align 1
    bool m_bUpdateOnClient; // offset 0x4B1, size 0x1, align 1
    char _pad_04B2[0x2]; // offset 0x4B2
    ValueRemapperInputType_t m_nInputType; // offset 0x4B4, size 0x4, align 4
    CUtlSymbolLarge m_iszRemapLineStartName; // offset 0x4B8, size 0x8, align 8
    CUtlSymbolLarge m_iszRemapLineEndName; // offset 0x4C0, size 0x8, align 8
    CHandle< CBaseEntity > m_hRemapLineStart; // offset 0x4C8, size 0x4, align 4
    CHandle< CBaseEntity > m_hRemapLineEnd; // offset 0x4CC, size 0x4, align 4
    float32 m_flMaximumChangePerSecond; // offset 0x4D0, size 0x4, align 4
    float32 m_flDisengageDistance; // offset 0x4D4, size 0x4, align 4
    float32 m_flEngageDistance; // offset 0x4D8, size 0x4, align 4
    bool m_bRequiresUseKey; // offset 0x4DC, size 0x1, align 1
    char _pad_04DD[0x3]; // offset 0x4DD
    ValueRemapperOutputType_t m_nOutputType; // offset 0x4E0, size 0x4, align 4
    char _pad_04E4[0x4]; // offset 0x4E4
    CUtlSymbolLarge m_iszOutputEntityName; // offset 0x4E8, size 0x8, align 8
    CUtlSymbolLarge m_iszOutputEntity2Name; // offset 0x4F0, size 0x8, align 8
    CUtlSymbolLarge m_iszOutputEntity3Name; // offset 0x4F8, size 0x8, align 8
    CUtlSymbolLarge m_iszOutputEntity4Name; // offset 0x500, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities; // offset 0x508, size 0x18, align 8 | MNotSaved
    ValueRemapperHapticsType_t m_nHapticsType; // offset 0x520, size 0x4, align 4
    ValueRemapperMomentumType_t m_nMomentumType; // offset 0x524, size 0x4, align 4
    float32 m_flMomentumModifier; // offset 0x528, size 0x4, align 4
    float32 m_flSnapValue; // offset 0x52C, size 0x4, align 4
    float32 m_flCurrentMomentum; // offset 0x530, size 0x4, align 4
    ValueRemapperRatchetType_t m_nRatchetType; // offset 0x534, size 0x4, align 4
    float32 m_flRatchetOffset; // offset 0x538, size 0x4, align 4
    float32 m_flInputOffset; // offset 0x53C, size 0x4, align 4
    bool m_bEngaged; // offset 0x540, size 0x1, align 1
    bool m_bFirstUpdate; // offset 0x541, size 0x1, align 1
    char _pad_0542[0x2]; // offset 0x542
    float32 m_flPreviousValue; // offset 0x544, size 0x4, align 4
    GameTime_t m_flPreviousUpdateTickTime; // offset 0x548, size 0x4, align 255
    VectorWS m_vecPreviousTestPoint; // offset 0x54C, size 0xC, align 4
    CHandle< CBasePlayerPawn > m_hUsingPlayer; // offset 0x558, size 0x4, align 4
    float32 m_flCustomOutputValue; // offset 0x55C, size 0x4, align 4
    CUtlSymbolLarge m_iszSoundEngage; // offset 0x560, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundDisengage; // offset 0x568, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundReachedValueZero; // offset 0x570, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundReachedValueOne; // offset 0x578, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundMovingLoop; // offset 0x580, size 0x8, align 8
    char _pad_0588[0x18]; // offset 0x588
    CEntityOutputTemplate< float32 > m_Position; // offset 0x5A0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_PositionDelta; // offset 0x5C0, size 0x20, align 8
    CEntityIOOutput m_OnReachedValueZero; // offset 0x5E0, size 0x18, align 255
    CEntityIOOutput m_OnReachedValueOne; // offset 0x5F8, size 0x18, align 255
    CEntityIOOutput m_OnReachedValueCustom; // offset 0x610, size 0x18, align 255
    CEntityIOOutput m_OnEngage; // offset 0x628, size 0x18, align 255
    CEntityIOOutput m_OnDisengage; // offset 0x640, size 0x18, align 255
};
