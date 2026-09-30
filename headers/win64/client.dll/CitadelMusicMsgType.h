#pragma once

enum CitadelMusicMsgType : uint32_t  // sizeof 0x4
{
    k_EMusicQueue_Invalid = 0,
    k_EMusicQueue_IdolAnnounce = 1,
    k_EMusicQueue_KothAnnounce = 2,
    k_EMusicQueue_RejuvDrop = 3,
    k_EMusicQueue_CorruptedItemShopAnnounce = 4,
};
