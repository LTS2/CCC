// public/js/main.js
const postForm = document.querySelector('#post-form');
const postList = document.querySelector('#post-list');

// 게시글 목록을 가져와서 화면에 렌더링하는 함수
function renderPosts(posts) {
  postList.innerHTML = '';
  posts.forEach(post => {
    const li = document.createElement('li');
    li.innerHTML = `
      <h2>${post.title}</h2>
      <p>${post.content}</p>
    `;
    postList.appendChild(li);
  });
}

// 게시글 목록을 서버에서 가져와서 화면에 렌더링
fetch('/api/posts')
  .then(response => response.json())
  .then(posts => renderPosts(posts));

// 게시글 작성 폼 제출 이벤트 핸들러
postForm.addEventListener('submit', event => {
  event.preventDefault(); // 폼 기본 동작 막기

  const title = postForm.elements.title.value;
  const content = postForm.elements.content.value;

  // 서버로 게시글 작성 요청 보내기
  fetch('/api/posts', {
    method: 'POST',
    headers: { 'Content-Type': 'application/json' },
    body: JSON.stringify({ title, content })
  })
    .then(response => response.json())
    .then(data => {
      if (data.success) {
        // 게시글 작성에 성공하면 화면에 반영
        const newPost = { title, content };
        posts.push(newPost);
        renderPosts(posts);
        postForm.reset(); // 폼 비우기
      }
    });
});
