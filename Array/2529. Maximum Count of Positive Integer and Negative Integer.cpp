func maximumCount(nums []int) int {
    var n_count int =0
    var p_count int =0
    for _,val:=range nums{
        if (val<0) {
            n_count++
        }else if (val>0) {
            p_count++
        }
    }

    if n_count > p_count  {return n_count}
    return p_count
}
