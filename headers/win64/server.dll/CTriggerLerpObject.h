#pragma once

class CTriggerLerpObject : public CBaseTrigger /*0x0*/  // sizeof 0xA68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9C8]; // offset 0x0
    CUtlSymbolLarge m_iszLerpTarget; // offset 0x9C8, size 0x8, align 8
    CHandle< CBaseEntity > m_hLerpTarget; // offset 0x9D0, size 0x4, align 4
    char _pad_09D4[0x4]; // offset 0x9D4
    CUtlSymbolLarge m_iszLerpTargetAttachment; // offset 0x9D8, size 0x8, align 8
    AttachmentHandle_t m_hLerpTargetAttachment; // offset 0x9E0, size 0x1, align 255
    char _pad_09E1[0x3]; // offset 0x9E1
    float32 m_flLerpDuration; // offset 0x9E4, size 0x4, align 4
    bool m_bAttachedEntityWasParented; // offset 0x9E8, size 0x1, align 1
    bool m_bLerpRestoreMoveType; // offset 0x9E9, size 0x1, align 1
    bool m_bSingleLerpObject; // offset 0x9EA, size 0x1, align 1
    char _pad_09EB[0x5]; // offset 0x9EB
    CUtlVector< lerpdata_t > m_vecLerpingObjects; // offset 0x9F0, size 0x18, align 8
    CUtlSymbolLarge m_iszLerpEffect; // offset 0xA08, size 0x8, align 8
    CUtlSymbolLarge m_iszLerpSound; // offset 0xA10, size 0x8, align 8
    bool m_bAttachTouchingObject; // offset 0xA18, size 0x1, align 1
    char _pad_0A19[0x3]; // offset 0xA19
    CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // offset 0xA1C, size 0x4, align 4
    CEntityIOOutput m_OnLerpStarted; // offset 0xA20, size 0x18, align 255
    CEntityIOOutput m_OnLerpFinished; // offset 0xA38, size 0x18, align 255
    CEntityIOOutput m_OnDetached; // offset 0xA50, size 0x18, align 255
};
