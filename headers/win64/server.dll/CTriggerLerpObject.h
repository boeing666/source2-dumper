#pragma once

class CTriggerLerpObject : public CBaseTrigger /*0x0*/  // sizeof 0x988, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    CUtlSymbolLarge m_iszLerpTarget; // offset 0x8E8, size 0x8, align 8
    CHandle< CBaseEntity > m_hLerpTarget; // offset 0x8F0, size 0x4, align 4
    char _pad_08F4[0x4]; // offset 0x8F4
    CUtlSymbolLarge m_iszLerpTargetAttachment; // offset 0x8F8, size 0x8, align 8
    AttachmentHandle_t m_hLerpTargetAttachment; // offset 0x900, size 0x1, align 255
    char _pad_0901[0x3]; // offset 0x901
    float32 m_flLerpDuration; // offset 0x904, size 0x4, align 4
    bool m_bAttachedEntityWasParented; // offset 0x908, size 0x1, align 1
    bool m_bLerpRestoreMoveType; // offset 0x909, size 0x1, align 1
    bool m_bSingleLerpObject; // offset 0x90A, size 0x1, align 1
    char _pad_090B[0x5]; // offset 0x90B
    CUtlVector< lerpdata_t > m_vecLerpingObjects; // offset 0x910, size 0x18, align 8
    CUtlSymbolLarge m_iszLerpEffect; // offset 0x928, size 0x8, align 8
    CUtlSymbolLarge m_iszLerpSound; // offset 0x930, size 0x8, align 8
    bool m_bAttachTouchingObject; // offset 0x938, size 0x1, align 1
    char _pad_0939[0x3]; // offset 0x939
    CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // offset 0x93C, size 0x4, align 4
    CEntityIOOutput m_OnLerpStarted; // offset 0x940, size 0x18, align 255
    CEntityIOOutput m_OnLerpFinished; // offset 0x958, size 0x18, align 255
    CEntityIOOutput m_OnDetached; // offset 0x970, size 0x18, align 255
};
