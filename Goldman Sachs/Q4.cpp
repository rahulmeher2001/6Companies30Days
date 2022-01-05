string encode(string src)
{     
  int n=0;
  n=src.length();
  int count=0;
  char hold;
  char temp;
  string ans;
  for(int i=0;i<n;i++)
  {
      if(count==0)
      {
          count++;
          hold=src[i];
          continue;
      }
      else
      {
          if(hold==src[i])
          {
              count++;
              continue;
          }
          else
          {
              ans.push_back(hold);
              temp='0'+count;
              ans.push_back(temp);
              hold=src[i];
              count=1;
              continue;
          }
      }
  }
  ans.push_back(hold);
  temp='0'+count;
  ans.push_back(temp);
  return ans;
}
