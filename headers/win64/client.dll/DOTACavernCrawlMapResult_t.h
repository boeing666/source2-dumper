#pragma once

struct DOTACavernCrawlMapResult_t  // sizeof 0x2, align 0xFF [trivial_dtor] (client)
{
    CavernCrawlPathID_t m_nCompletedPathID; // offset 0x0, size 0x1, align 255
    CavernCrawlRoomID_t m_nClaimedRoomID; // offset 0x1, size 0x1, align 255
};
